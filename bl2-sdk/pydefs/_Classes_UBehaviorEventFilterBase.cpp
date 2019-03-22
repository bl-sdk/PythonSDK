#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorEventFilterBase(py::module &m)
{
    py::class_< UBehaviorEventFilterBase,  UObject   >(m, "UBehaviorEventFilterBase")
        .def("StaticClass", &UBehaviorEventFilterBase::StaticClass, py::return_value_policy::reference)
          ;
}