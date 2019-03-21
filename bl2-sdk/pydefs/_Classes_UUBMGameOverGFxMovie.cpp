#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUBMGameOverGFxMovie(py::object m)
{
    py::class_< UUBMGameOverGFxMovie,  UWillowGFxMovie   >(m, "UUBMGameOverGFxMovie")
        .def_readwrite("GameOverClip", &UUBMGameOverGFxMovie::GameOverClip)
        .def("StaticClass", &UUBMGameOverGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("extEnableGameOverScreenInput", &UUBMGameOverGFxMovie::extEnableGameOverScreenInput)
        .def("extGameOverClipReady", &UUBMGameOverGFxMovie::extGameOverClipReady)
        .def("PopulatePlayerInfo", &UUBMGameOverGFxMovie::PopulatePlayerInfo)
        .def("HandleInputKey", &UUBMGameOverGFxMovie::HandleInputKey)
        .def("eventStart", &UUBMGameOverGFxMovie::eventStart)
          ;
}