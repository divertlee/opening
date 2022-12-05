#pragma one



namespace Vect
{
	template<typename T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;
		vector()//构造函数
			:_start(nullptr)
			,_finish(nullptr)
			,_endofstorage(nullptr)
		{}


		//vector(int n, const T& val = T())
		//	: _start(nullptr)
		//	, _finish(nullptr)
		//	, _endofstorage(nullptr)
		//{
		//	reserve(n);//扩容
		//	for (int i = 0; i < n; i++)
		//	{
		//		push_back(val);
		//	}
		//}

		vector(size_t n, const T& val = T())
			: _start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{
			reserve(n);//扩容
			for (size_t i = 0; i < n; i++)
			{
				push_back(val);
			}
		}

		template <class InputIterator>
		vector(InputIterator first, InputIterator last)//构造函数：用迭代器区间去初始化
			: _start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		vector(const vector<T>& v)//拷贝构造
			:_start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)//因为要扩容，所以要提前初始化三个迭代器
		{
			vector<T> tmp(v.begin(),v.end());//用迭代器构造tmp；因为是用的const+引用所以要有中间者tmp
			
			swap(tmp);
			
		}

		~vector()//析构函数
		{
			delete[] _start;
			_start = _finish = _endofstorage = nullptr;
		}

		size_t size() const//size
		{
		return 	_finish - _start;
		}

		size_t capacity()const//capacity
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

		const_iterator begin()const
		{
			return _start;
		}

		const_iterator end() const
		{
			return _finish;
		}

		T& operator[](size_t pos)
		{
			assert(pos < size());
			return T[pos];
		}

		const T& operator[](size_t pos) const
		{
			assert(pos < size());
			return T[pos];
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t oldsize = size();
				T* tmp = new T[n];//开辟新空间
				if (_start)//如果_start指向的空间不为空就要拷贝数据
				{
					for (size_t i = 0; i < oldsize; i++)
					{
						tmp[i] = _start[i];
					}
					delete[]_start;//删除旧空间-空间不为空才需要释放
				}
				_start = tmp;//指向新空间
				_finish = _start + oldsize;//原来的size=_finish-_start,而_start是新空间的_start,_finish是旧空间的_finish，相减会出问题，所以我们要记录oldsize（），用新的_start+oldsize()得出新的_finish
				_endofstorage = _start + n;
			}
		}

		void resize(size_t n, T val = T())//value_type val 给匿名对象
		{
			if (n > capacity())//n大于容量
			{
				reserve(n);
			}
			if (n > size())
			{
				while (_finish < _start + n)
				{
					*_finish = val;
					++_finish;
				}
			
			}
			else
			{
				_finish = _start + n;
			}
		}

		void push_back(const T& x)//尾插
		{
			if (_finish == _endofstorage)
			{
				size_t newcapacity = capacity() == 0 ? 4 : capacity() * 2;
				reserve(newcapacity);
			}
			*_finish = x;
			++_finish;
		}

		bool empty()const
		{
			return _start == _finish;
		}

		void pop_back()
		{
			assert(!empty());
			--_finish;
		}

		//迭代器失效：当插入时要扩容，pos指针指向原来的空间，而_start指向新空间，在挪动数据时会出问题
		iterator insert(iterator pos, const T& val)
		{
			assert(pos >= _start);
			assert(pos < _finish);

			//_start为空时插入要扩容或者容量满了都要扩容
			if (  _finish==_endofstorage)
			{
				size_t len = pos - _start;
				size_t newcapacity = capacity() == 0 ? 4 : capacity() * 2;
				reserve(newcapacity);
				pos = _start + len;//针对迭代器失效要对pos更新
			}
			iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *(end);
				--end;
			}
			*pos = val;
			++_finish;	
			return pos;//返回迭代器
		}

		iterator erase(iterator pos)
		{
			assert(pos >= _start);
			assert(pos < _finish);
			iterator begin=pos+1;
			while (begin<_finish)
			{
				*(begin-1) = *(begin );
				++begin;
			}
			--_finish;
			return pos;//返回迭代器
		}

		void clear()//清理---不影响容量
		{
			_finish = _start;
		}

		void swap(vector<T>& v)//交换
		{
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_endofstorage,v._endofstorage);
		}

		vector<T>& operator=( vector<T> v)//先进来进入拷贝构造v拷贝构造一个临时对象
		{
			swap(v);
			return *this;
		}
		
	private:

		iterator _start;//从0开始
		iterator _finish;//size()的下一个位置
		iterator _endofstorage;//容量
	};


	
}