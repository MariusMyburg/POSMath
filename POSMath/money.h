
#define TEN_THOUSAND 10000.0

class CRand
{
private:
	int m_Value;

public:
	CRand(int value) {
		m_Value = value;
	}
};

class CCent
{
private:
	int m_Value;
};



class CMoney {
private:
	double m_MoneyValueTimesTenThousand;

public:
	CMoney(double Rands)
	{
		m_MoneyValueTimesTenThousand = (Rands * TEN_THOUSAND);
	}

	CMoney(int Rands, int Cents)
	{
		double r = Rands;
		double c = Cents;
		r += (c/100.0);
		m_MoneyValueTimesTenThousand = (r * TEN_THOUSAND);
	}

	void operator *=(int scale)
	{
		m_MoneyValueTimesTenThousand = m_MoneyValueTimesTenThousand * scale;
	}

	CMoney& operator *(CMoney right)
	{
		CMoney ret(0);
		ret = m_MoneyValueTimesTenThousand * right.m_MoneyValueTimesTenThousand;

		return ret;
	}


	CRand GetRands()
	{
		double v = m_MoneyValueTimesTenThousand;
		v /= TEN_THOUSAND;
		int rands = (int)v;
		return CRand(rands);
	}

	int GetCents()
	{
		double v = m_MoneyValueTimesTenThousand;
		v /= TEN_THOUSAND;
		double rands = (int)v;
		double cents = (v-rands);
		return (int)(cents * 100.0);
	}

};
