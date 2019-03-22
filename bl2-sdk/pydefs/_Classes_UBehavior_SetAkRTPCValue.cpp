#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetAkRTPCValue(py::module &m)
{
    py::class_< UBehavior_SetAkRTPCValue,  UBehaviorBase   >(m, "UBehavior_SetAkRTPCValue")
        .def_readwrite("RTPC", &UBehavior_SetAkRTPCValue::RTPC)
        .def_readwrite("Value", &UBehavior_SetAkRTPCValue::Value)
        .def("ApplyBehaviorToContext", &UBehavior_SetAkRTPCValue::ApplyBehaviorToContext)
          ;
}