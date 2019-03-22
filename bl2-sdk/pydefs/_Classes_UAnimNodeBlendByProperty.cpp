#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendByProperty(py::module &m)
{
    py::class_< UAnimNodeBlendByProperty,  UAnimNodeBlendList   >(m, "UAnimNodeBlendByProperty")
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
        .def("StaticClass", &UAnimNodeBlendByProperty::StaticClass, py::return_value_policy::reference)
          ;
}