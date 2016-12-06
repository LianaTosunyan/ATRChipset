#ifndef __CVECTORCOLLECTION__
#define __CVECTORCOLLECTION__

#include <IVector.h>
#include <Qvector>

class CVectorCollection
{
public:
	CVectorCollection(QVector<IVector*>);
	CVectorCollection();
	IVector* operator[](int);
	int size() const;
	int capacity() const;
private:
	QVector<IVector*> m_collection;
};

#endif //__CVECTORCOLLECTION__