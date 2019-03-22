#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PlayHardFlinch(py::module &m)
{
    py::class_< UBehavior_PlayHardFlinch,  UBehaviorBase   >(m, "UBehavior_PlayHardFlinch")
        .def_readwrite("HitLocation", &UBehavior_PlayHardFlinch::HitLocation)
        .def_readwrite("InstigatedBy", &UBehavior_PlayHardFlinch::InstigatedBy)
        .def("ApplyBehaviorToContext", &UBehavior_PlayHardFlinch::ApplyBehaviorToContext)
          ;
}