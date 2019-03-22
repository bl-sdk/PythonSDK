#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PostAkEventGetRTPC(py::module &m)
{
    py::class_< UBehavior_PostAkEventGetRTPC,  UBehavior_PostAkEvent   >(m, "UBehavior_PostAkEventGetRTPC")
        .def_readwrite("RTPC", &UBehavior_PostAkEventGetRTPC::RTPC)
        .def_readwrite("LastValue", &UBehavior_PostAkEventGetRTPC::LastValue)
        .def("StaticClass", &UBehavior_PostAkEventGetRTPC::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_PostAkEventGetRTPC::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_PostAkEventGetRTPC::ApplyBehaviorToContext)
          ;
}