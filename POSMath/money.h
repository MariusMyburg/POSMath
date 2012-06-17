
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

	void operator *(CMoney& right)
	{
		m_Rands = m_Rands * right.m_Rands;
	}

};
