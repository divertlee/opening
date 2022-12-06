#pragma once

namespace Vect
{
	template<typename T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;
		
		vector()//构造函数
			//初始化列表-必要用的情况：const成员；没有默认构造的自定义类型成员
			:_start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{}
		
		~vector()//析构函数
		{
			delete[] _start;
			_start = _finish = _endofstorage = nullptr;
		}

	size_t size()const
		{
			return _finish - _start;
		}
		size_t capacity() const//容量
		{
			return _endofstorage - _start;
		}

		iterator begin()
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

		const_iterator begin() const
		{
			return _start;
		}

		const_iterator end() const
		{
			return _finish;
		}

		void reserve(size_t n)//扩容
		{
			
			if (n > capacity())
			{
				size_t oldsize = size();
				T* tmp = new T[n];//构造一个tmp
				//memcpy-浅拷贝
				if (_start != _finish)//需要拷贝---有数据才要拷贝
				{
					memcpy(tmp, _start, sizeof(T) * oldsize);
				}
				delete[] _start;
				_start = tmp;
				//operator=-深拷贝
				_finish = _start + oldsize;
				_endofstorage = _start + n;
			}

		}

		void resize(size_t n, T val = T())
		{
			if (n > size())
			{
				if (n > capacity)
				{
					reserve(n);//扩容
				}
				while (_finish != _start + n)
				{
					*_finish = val;
					++_finish;
				}
			}else{
				_finish = _start + n;//n<size()
			}

		}

		vector& operator[](size_t pos)//operator【】重载
		{
			assert(pos >= _start);
			assert(pos < _finish);
			return T[pos];
		}

		const vector& operator[](size_t pos)const //const_operator【】重载
		{
			assert(pos >= _start);
			assert(pos < _finish);
			return T[pos];
		}

		void push_back(const T& val)
		{
			if (_finish == _endofstorage)//容量为0或者满了都要扩容
			{
				size_t newcapacity = capacity() == 0 ? 4 : capacity() * 2;
				reserve(newcapacity);
			}
			*_finish = val;
			++_finish;
		}

		bool empty()
		{
			return_start == _finish;
		}

		void pop_back()//尾删
		{
			assert(!empty());
			--_finish;
		}

		void clear()
		{
			assert(!empty());

		}

	private:
		iterator _start;//0的位置
		iterator _finish;//最后一个成员变量的下一个位置
		iterator _endofstorage;//

	};
}
