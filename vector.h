#pragma one



namespace Vect
{
	template<typename T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;
		vector()//���캯��
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
				T* tmp = new T[n];//�����¿ռ�
				if (_start)//���_startָ��Ŀռ䲻Ϊ�վ�Ҫ��������
				{
					memcpy(tmp, _start, sizeof(T) * oldsize);//��_start�����ݿ�����tmp����
					delete[]_start;//ɾ���ɿռ�-�ռ䲻Ϊ�ղ���Ҫ�ͷ�
				}
				_start = tmp;//ָ���¿ռ�
				_finish = _start + oldsize;//ԭ����size=_finish-_start,��_start���¿ռ��_start,_finish�Ǿɿռ��_finish�����������⣬��������Ҫ��¼oldsize���������µ�_start+oldsize()�ó��µ�_finish
				_endofstorage = _start + n;
			}
		}

		void resize(size_t n, T val = T())//value_type val ����������
		{
			if (n > capacity())//n��������
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

		void push_back(const T& x)//β��
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

		//������ʧЧ��������ʱҪ���ݣ�posָ��ָ��ԭ���Ŀռ䣬��_startָ���¿ռ䣬��Ų������ʱ�������
		void insert(iterator pos, const T& val)
		{
			assert(pos >= _start);
			assert(pos < _finish);

			//_startΪ��ʱ����Ҫ���ݻ����������˶�Ҫ����
			if (  _finish==_endofstorage)
			{
				size_t len = pos - _start;
				size_t newcapacity = capacity() == 0 ? 4 : capacity() * 2;
				reserve(newcapacity);
				pos = _start + len;//��Ե�����ʧЧҪ��pos����
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

		iterator _start;//��0��ʼ
		iterator _finish;//size()����һ��λ��
		iterator _endofstorage;//����
	};


	
}