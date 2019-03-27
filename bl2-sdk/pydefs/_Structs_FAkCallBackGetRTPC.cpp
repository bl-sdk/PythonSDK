#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAkCallBackGetRTPC(py::module &m)
{
    py::class_< FAkCallBackGetRTPC >(m, "FAkCallBackGetRTPC")
        .def_readwrite("RTPC", &FAkCallBackGetRTPC::RTPC)
        .def_readwrite("Owner", &FAkCallBackGetRTPC::Owner)
        .def_readwrite("Component", &FAkCallBackGetRTPC::Component)
        .def_readwrite("CallbackValue", &FAkCallBackGetRTPC::CallbackValue)
  ;
}