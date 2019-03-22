#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehaviorBase(py::module &m)
{
    py::class_< UPlayerBehaviorBase,  UBehaviorBase   >(m, "UPlayerBehaviorBase")
        .def("StaticClass", &UPlayerBehaviorBase::StaticClass, py::return_value_policy::reference)
          ;
}