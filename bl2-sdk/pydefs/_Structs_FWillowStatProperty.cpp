#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWillowStatProperty(py::module &m)
{
    py::class_< FWillowStatProperty >(m, "FWillowStatProperty")
        .def_readwrite("Id", &FWillowStatProperty::Id)
        .def_readwrite("Data", &FWillowStatProperty::Data)
        .def_readwrite("MaxData", &FWillowStatProperty::MaxData)
        .def_readwrite("ChallengeBaseData", &FWillowStatProperty::ChallengeBaseData)
        .def_readwrite("OnlineId", &FWillowStatProperty::OnlineId)
  ;
}