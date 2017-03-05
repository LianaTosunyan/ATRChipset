#ifndef GLOBAL_H
#define GLOBAL_H

#include <QList>

// Forword declaration
class QString;
class QStringList;
class QDateTime;
class QVariant;
class FileContext;


// Represent Field type in FileContext directory 
enum FieldType
{
        Context,
        TestCondition,
};

// Hardcode Lot,Wafer,Device literals
#define LOT "Lot"
#define WAFER "Wafer"
#define DEVICE "Device"

// Field ID
typedef QString Field;
typedef QStringList FieldList;
typedef QVariant Value;
typedef QPair<Value, FieldType>  FieldValue;
typedef QList<int> IDList;

// Bin type
enum class EBinType { HBin, SBin };

// Types of files,which will be used
enum FileType
{
        BinData,
        BinDefinition,
        ParameterDefinition,
        ParameterData,
        ParameterLimits,
};

#endif // !GLOBAL_H
