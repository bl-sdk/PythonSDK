#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeSpin(py::module &m)
{
    py::class_< UBehavior_ChangeSpin,  UBehaviorBase   >(m, "UBehavior_ChangeSpin")
        .def_readwrite("YawRate", &UBehavior_ChangeSpin::YawRate)
        .def_readwrite("PitchRate", &UBehavior_ChangeSpin::PitchRate)
        .def_readwrite("RollRate", &UBehavior_ChangeSpin::RollRate)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeSpin::ApplyBehaviorToContext)
          ;
}