#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWireTerminal(py::module &m)
{
    py::class_< AWireTerminal,  AStaticMeshActor   >(m, "AWireTerminal")
        .def_readwrite("NextTerminal", &AWireTerminal::NextTerminal)
        .def_readwrite("Linkages", &AWireTerminal::Linkages)
        .def_readwrite("WireMaterial", &AWireTerminal::WireMaterial)
        .def("StaticClass", &AWireTerminal::StaticClass, py::return_value_policy::reference)
        .def("eventDestroyed", &AWireTerminal::eventDestroyed)
        .def("NotifyModifiedTerminal", &AWireTerminal::NotifyModifiedTerminal)
          ;
}