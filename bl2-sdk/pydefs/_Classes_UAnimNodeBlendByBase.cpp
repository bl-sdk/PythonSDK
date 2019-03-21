#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendByBase()
{
    class_< UAnimNodeBlendByBase, bases< UAnimNodeBlendList >  , boost::noncopyable>("UAnimNodeBlendByBase", no_init)
        .def_readwrite("Type", &UAnimNodeBlendByBase::Type)
        .def_readwrite("ActorTag", &UAnimNodeBlendByBase::ActorTag)
        .def_readwrite("ActorClass", &UAnimNodeBlendByBase::ActorClass)
        .def_readwrite("BlendTime", &UAnimNodeBlendByBase::BlendTime)
        .def_readwrite("CachedBase", &UAnimNodeBlendByBase::CachedBase)
        .def("StaticClass", &UAnimNodeBlendByBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}