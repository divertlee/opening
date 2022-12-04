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
					memcpy(tmp, _start, sizeof(T) * oldsize);//把_start的数据拷贝到tmp上面
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
		void insert(iterator pos, const T& val)
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
			pos = val;
			++_finish;			
		}


	private:

		iterator _start;//从0开始
		iterator _finish;//size()的下一个位置
		iterator _endofstorage;//容量
	};


	
}