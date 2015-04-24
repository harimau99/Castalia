//
// Generated file, do not edit! Created by nedtool 4.6 from src/node/communication/mac/maftMac/MaftPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "MaftPacket_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

Register_Class(MaftPacket);

MaftPacket::MaftPacket(const char *name, int kind) : ::MacPacket(name,kind)
{
    this->ptype_var = 0;
    this->pair_count_var = 0;
    for (unsigned int i=0; i<5; i++)
        this->txer_var[i] = 0;
    for (unsigned int i=0; i<5; i++)
        this->rxer_var[i] = 0;
    for (unsigned int i=0; i<5; i++)
        this->channel_var[i] = 0;
    this->x_var = 0;
    this->y_var = 0;
    this->v_var = 0;
    this->angle_var = 0;
    this->hasData_var = 0;
    this->time_val_var = 0;
    this->del_t_var = 0;
}

MaftPacket::MaftPacket(const MaftPacket& other) : ::MacPacket(other)
{
    copy(other);
}

MaftPacket::~MaftPacket()
{
}

MaftPacket& MaftPacket::operator=(const MaftPacket& other)
{
    if (this==&other) return *this;
    ::MacPacket::operator=(other);
    copy(other);
    return *this;
}

void MaftPacket::copy(const MaftPacket& other)
{
    this->ptype_var = other.ptype_var;
    this->pair_count_var = other.pair_count_var;
    for (unsigned int i=0; i<5; i++)
        this->txer_var[i] = other.txer_var[i];
    for (unsigned int i=0; i<5; i++)
        this->rxer_var[i] = other.rxer_var[i];
    for (unsigned int i=0; i<5; i++)
        this->channel_var[i] = other.channel_var[i];
    this->x_var = other.x_var;
    this->y_var = other.y_var;
    this->v_var = other.v_var;
    this->angle_var = other.angle_var;
    this->hasData_var = other.hasData_var;
    this->time_val_var = other.time_val_var;
    this->del_t_var = other.del_t_var;
}

void MaftPacket::parsimPack(cCommBuffer *b)
{
    ::MacPacket::parsimPack(b);
    doPacking(b,this->ptype_var);
    doPacking(b,this->pair_count_var);
    doPacking(b,this->txer_var,5);
    doPacking(b,this->rxer_var,5);
    doPacking(b,this->channel_var,5);
    doPacking(b,this->x_var);
    doPacking(b,this->y_var);
    doPacking(b,this->v_var);
    doPacking(b,this->angle_var);
    doPacking(b,this->hasData_var);
    doPacking(b,this->time_val_var);
    doPacking(b,this->del_t_var);
}

void MaftPacket::parsimUnpack(cCommBuffer *b)
{
    ::MacPacket::parsimUnpack(b);
    doUnpacking(b,this->ptype_var);
    doUnpacking(b,this->pair_count_var);
    doUnpacking(b,this->txer_var,5);
    doUnpacking(b,this->rxer_var,5);
    doUnpacking(b,this->channel_var,5);
    doUnpacking(b,this->x_var);
    doUnpacking(b,this->y_var);
    doUnpacking(b,this->v_var);
    doUnpacking(b,this->angle_var);
    doUnpacking(b,this->hasData_var);
    doUnpacking(b,this->time_val_var);
    doUnpacking(b,this->del_t_var);
}

int MaftPacket::getPtype() const
{
    return ptype_var;
}

void MaftPacket::setPtype(int ptype)
{
    this->ptype_var = ptype;
}

int MaftPacket::getPair_count() const
{
    return pair_count_var;
}

void MaftPacket::setPair_count(int pair_count)
{
    this->pair_count_var = pair_count;
}

unsigned int MaftPacket::getTxerArraySize() const
{
    return 5;
}

int MaftPacket::getTxer(unsigned int k) const
{
    if (k>=5) throw cRuntimeError("Array of size 5 indexed by %lu", (unsigned long)k);
    return txer_var[k];
}

void MaftPacket::setTxer(unsigned int k, int txer)
{
    if (k>=5) throw cRuntimeError("Array of size 5 indexed by %lu", (unsigned long)k);
    this->txer_var[k] = txer;
}

unsigned int MaftPacket::getRxerArraySize() const
{
    return 5;
}

int MaftPacket::getRxer(unsigned int k) const
{
    if (k>=5) throw cRuntimeError("Array of size 5 indexed by %lu", (unsigned long)k);
    return rxer_var[k];
}

void MaftPacket::setRxer(unsigned int k, int rxer)
{
    if (k>=5) throw cRuntimeError("Array of size 5 indexed by %lu", (unsigned long)k);
    this->rxer_var[k] = rxer;
}

unsigned int MaftPacket::getChannelArraySize() const
{
    return 5;
}

int MaftPacket::getChannel(unsigned int k) const
{
    if (k>=5) throw cRuntimeError("Array of size 5 indexed by %lu", (unsigned long)k);
    return channel_var[k];
}

void MaftPacket::setChannel(unsigned int k, int channel)
{
    if (k>=5) throw cRuntimeError("Array of size 5 indexed by %lu", (unsigned long)k);
    this->channel_var[k] = channel;
}

int MaftPacket::getX() const
{
    return x_var;
}

void MaftPacket::setX(int x)
{
    this->x_var = x;
}

int MaftPacket::getY() const
{
    return y_var;
}

void MaftPacket::setY(int y)
{
    this->y_var = y;
}

double MaftPacket::getV() const
{
    return v_var;
}

void MaftPacket::setV(double v)
{
    this->v_var = v;
}

double MaftPacket::getAngle() const
{
    return angle_var;
}

void MaftPacket::setAngle(double angle)
{
    this->angle_var = angle;
}

bool MaftPacket::getHasData() const
{
    return hasData_var;
}

void MaftPacket::setHasData(bool hasData)
{
    this->hasData_var = hasData;
}

double MaftPacket::getTime_val() const
{
    return time_val_var;
}

void MaftPacket::setTime_val(double time_val)
{
    this->time_val_var = time_val;
}

double MaftPacket::getDel_t() const
{
    return del_t_var;
}

void MaftPacket::setDel_t(double del_t)
{
    this->del_t_var = del_t;
}

class MaftPacketDescriptor : public cClassDescriptor
{
  public:
    MaftPacketDescriptor();
    virtual ~MaftPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MaftPacketDescriptor);

MaftPacketDescriptor::MaftPacketDescriptor() : cClassDescriptor("MaftPacket", "MacPacket")
{
}

MaftPacketDescriptor::~MaftPacketDescriptor()
{
}

bool MaftPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MaftPacket *>(obj)!=NULL;
}

const char *MaftPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MaftPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 12+basedesc->getFieldCount(object) : 12;
}

unsigned int MaftPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<12) ? fieldTypeFlags[field] : 0;
}

const char *MaftPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "ptype",
        "pair_count",
        "txer",
        "rxer",
        "channel",
        "x",
        "y",
        "v",
        "angle",
        "hasData",
        "time_val",
        "del_t",
    };
    return (field>=0 && field<12) ? fieldNames[field] : NULL;
}

int MaftPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "ptype")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "pair_count")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "txer")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "rxer")==0) return base+3;
    if (fieldName[0]=='c' && strcmp(fieldName, "channel")==0) return base+4;
    if (fieldName[0]=='x' && strcmp(fieldName, "x")==0) return base+5;
    if (fieldName[0]=='y' && strcmp(fieldName, "y")==0) return base+6;
    if (fieldName[0]=='v' && strcmp(fieldName, "v")==0) return base+7;
    if (fieldName[0]=='a' && strcmp(fieldName, "angle")==0) return base+8;
    if (fieldName[0]=='h' && strcmp(fieldName, "hasData")==0) return base+9;
    if (fieldName[0]=='t' && strcmp(fieldName, "time_val")==0) return base+10;
    if (fieldName[0]=='d' && strcmp(fieldName, "del_t")==0) return base+11;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MaftPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "double",
        "double",
        "bool",
        "double",
        "double",
    };
    return (field>=0 && field<12) ? fieldTypeStrings[field] : NULL;
}

const char *MaftPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int MaftPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MaftPacket *pp = (MaftPacket *)object; (void)pp;
    switch (field) {
        case 2: return 5;
        case 3: return 5;
        case 4: return 5;
        default: return 0;
    }
}

std::string MaftPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MaftPacket *pp = (MaftPacket *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPtype());
        case 1: return long2string(pp->getPair_count());
        case 2: return long2string(pp->getTxer(i));
        case 3: return long2string(pp->getRxer(i));
        case 4: return long2string(pp->getChannel(i));
        case 5: return long2string(pp->getX());
        case 6: return long2string(pp->getY());
        case 7: return double2string(pp->getV());
        case 8: return double2string(pp->getAngle());
        case 9: return bool2string(pp->getHasData());
        case 10: return double2string(pp->getTime_val());
        case 11: return double2string(pp->getDel_t());
        default: return "";
    }
}

bool MaftPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MaftPacket *pp = (MaftPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setPtype(string2long(value)); return true;
        case 1: pp->setPair_count(string2long(value)); return true;
        case 2: pp->setTxer(i,string2long(value)); return true;
        case 3: pp->setRxer(i,string2long(value)); return true;
        case 4: pp->setChannel(i,string2long(value)); return true;
        case 5: pp->setX(string2long(value)); return true;
        case 6: pp->setY(string2long(value)); return true;
        case 7: pp->setV(string2double(value)); return true;
        case 8: pp->setAngle(string2double(value)); return true;
        case 9: pp->setHasData(string2bool(value)); return true;
        case 10: pp->setTime_val(string2double(value)); return true;
        case 11: pp->setDel_t(string2double(value)); return true;
        default: return false;
    }
}

const char *MaftPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *MaftPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MaftPacket *pp = (MaftPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


