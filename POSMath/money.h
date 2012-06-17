
class CMoney {
private:
	long m_Rands;

public:
	CMoney(long Rands)
	{
		m_Rands = Rands;
	}

	CMoney(int Rands, int Cents)
	{
	}

	void operator *=(int scale)
	{
		m_Rands = m_Rands * scale;
	}

	CMoney& operator *(CMoney right)
	{
		CMoney ret(0);
		ret = m_Rands * right.m_Rands;

		return ret;
	}

};
