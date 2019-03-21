#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehaviorBase(py::object m)
{
    py::class_< UProjectileBehaviorBase,  UBehaviorBase   >(m, "UProjectileBehaviorBase")
        .def("StaticClass", &UProjectileBehaviorBase::StaticClass, py::return_value_policy::reference)
          ;
}