#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendByProperty()
{
    class_< UAnimNodeBlendByProperty, bases< UAnimNodeBlendList >  , boost::noncopyable>("UAnimNodeBlendByProperty", no_init)
        .def_readwrite("PropertyName", &UAnimNodeBlendByProperty::PropertyName)
        .def_readwrite("CachedPropertyName", &UAnimNodeBlendByProperty::CachedPropertyName)
        .def_readwrite("CachedFloatProperty", &UAnimNodeBlendByProperty::CachedFloatProperty)
        .def_readwrite("CachedBoolProperty", &UAnimNodeBlendByProperty::CachedBoolProperty)
        .def_readwrite("CachedByteProperty", &UAnimNodeBlendByProperty::CachedByteProperty)
        .def_readwrite("CachedOwner", &UAnimNodeBlendByProperty::CachedOwner)
        .def_readwrite("BlendTime", &UAnimNodeBlendByProperty::BlendTime)
        .def_readwrite("FloatPropMin", &UAnimNodeBlendByProperty::FloatPropMin)
        .def_readwrite("FloatPropMax", &UAnimNodeBlendByProperty::FloatPropMax)
        .def_readwrite("BlendToChild1Time", &UAnimNodeBlendByProperty::BlendToChild1Time)
        .def_readwrite("BlendToChild2Time", &UAnimNodeBlendByProperty::BlendToChild2Time)
        .def("StaticClass", &UAnimNodeBlendByProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}