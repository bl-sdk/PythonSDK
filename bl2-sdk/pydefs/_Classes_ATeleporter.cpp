#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATeleporter(py::module &m)
{
    py::class_< ATeleporter,  ANavigationPoint   >(m, "ATeleporter")
		.def_static("StaticClass", &ATeleporter::StaticClass, py::return_value_policy::reference)
        .def_readwrite("URL", &ATeleporter::URL)
        .def_readwrite("ProductRequired", &ATeleporter::ProductRequired)
        .def_readwrite("TargetVelocity", &ATeleporter::TargetVelocity)
        .def_readwrite("LastFired", &ATeleporter::LastFired)
        .def("eventSpecialHandling", &ATeleporter::eventSpecialHandling, py::return_value_policy::reference)
        .def("eventPostTouch", &ATeleporter::eventPostTouch)
        .def("eventTouch", &ATeleporter::eventTouch)
        .def("eventAccept", &ATeleporter::eventAccept)
        .def("eventPostBeginPlay", &ATeleporter::eventPostBeginPlay)
        .def("CanTeleport", &ATeleporter::CanTeleport)
          ;
}