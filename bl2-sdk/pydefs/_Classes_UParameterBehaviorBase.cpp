#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParameterBehaviorBase()
{
    py::class_< UParameterBehaviorBase,  UBehaviorBase   >("UParameterBehaviorBase")
        .def_readwrite("ParameterName", &UParameterBehaviorBase::ParameterName)
        .def_readwrite("SectionIndex", &UParameterBehaviorBase::SectionIndex)
        .def("StaticClass", &UParameterBehaviorBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}