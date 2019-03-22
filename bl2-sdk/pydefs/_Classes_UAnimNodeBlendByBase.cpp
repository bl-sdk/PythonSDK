#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendByBase(py::module &m)
{
    py::class_< UAnimNodeBlendByBase,  UAnimNodeBlendList   >(m, "UAnimNodeBlendByBase")
        .def_readwrite("Type", &UAnimNodeBlendByBase::Type)
        .def_readwrite("ActorTag", &UAnimNodeBlendByBase::ActorTag)
        .def_readwrite("ActorClass", &UAnimNodeBlendByBase::ActorClass)
        .def_readwrite("BlendTime", &UAnimNodeBlendByBase::BlendTime)
        .def_readwrite("CachedBase", &UAnimNodeBlendByBase::CachedBase)
        .def("StaticClass", &UAnimNodeBlendByBase::StaticClass, py::return_value_policy::reference)
          ;
}