#include "Context.h"

Context::Context() : m_lot(), m_wafer(), m_device() {}

Context::Context(QString lot, QString wafer, QString device)
	: m_lot(lot), m_wafer(wafer), m_device(device) {}

QString Context::GetLot() const
{
	return m_lot;
}

QString Context::GetWafer() const
{
	return m_wafer;
}

QString Context::GetDevice() const
{
	return m_device;
}

//
// Operator < for context class
// Without this cant insert Context to map
//
bool operator<(const Context& context1, const Context& context2)
{
	if (context1.GetLot() < context2.GetLot())
		return true;
	else
		if (context1.GetWafer() < context2.GetWafer())
			return true;
		else
			if (context1.GetDevice() < context2.GetDevice())
				return true;
			else
				return false;
}