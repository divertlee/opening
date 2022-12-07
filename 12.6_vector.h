#pragma once

namespace Vect
{
	template<typename T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;
		
		vector()//���캯��
			//��ʼ���б�-��Ҫ�õ������const��Ա��û��Ĭ�Ϲ�����Զ������ͳ�Ա
			:_start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{}
		
		~vector()//��������
		{
			delete[] _start;
			_start = _finish = _endofstorage = nullptr;
		}

	size_t size()const
		{
			return _finish - _start;
		}
		size_t capacity() const//����
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

		void reserve(size_t n)//����
		{
			
			if (n > capacity())
			{
				size_t oldsize = size();
				T* tmp = new T[n];//����һ��tmp
				//memcpy-ǳ����
				if (_start != _finish)//��Ҫ����---�����ݲ�Ҫ����
				{
					memcpy(tmp, _start, sizeof(T) * oldsize);
				}
				delete[] _start;
				_start = tmp;
				//operator=-���
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
					reserve(n);//����
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

		vector& operator[](size_t pos)//operator��������
		{
			assert(pos >= _start);
			assert(pos < _finish);
			return T[pos];
		}

		const vector& operator[](size_t pos)const //const_operator��������
		{
			assert(pos >= _start);
			assert(pos < _finish);
			return T[pos];
		}

		void push_back(const T& val)
		{
			if (_finish == _endofstorage)//����Ϊ0�������˶�Ҫ����
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

		void pop_back()//βɾ
		{
			assert(!empty());
			--_finish;
		}

		void clear()
		{
			assert(!empty());

		}

	private:
		iterator _start;//0��λ��
		iterator _finish;//���һ����Ա��������һ��λ��
		iterator _endofstorage;//

	};
}
