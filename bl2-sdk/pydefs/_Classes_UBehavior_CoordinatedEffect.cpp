#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CoordinatedEffect(py::module &m)
{
    py::class_< UBehavior_CoordinatedEffect,  UBehaviorBase   >(m, "UBehavior_CoordinatedEffect")
        .def_readwrite("Status", &UBehavior_CoordinatedEffect::Status)
        .def_readwrite("Effect", &UBehavior_CoordinatedEffect::Effect)
        .def("StaticClass", &UBehavior_CoordinatedEffect::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_CoordinatedEffect::ApplyBehaviorToContext)
          ;
}