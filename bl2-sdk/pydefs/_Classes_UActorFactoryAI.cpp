#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryAI(py::module &m)
{
    py::class_< UActorFactoryAI,  UActorFactory   >(m, "UActorFactoryAI")
        .def_readwrite("ControllerClass", &UActorFactoryAI::ControllerClass)
        .def_readwrite("PawnClass", &UActorFactoryAI::PawnClass)
        .def_readwrite("PawnName", &UActorFactoryAI::PawnName)
        .def_readwrite("InventoryList", &UActorFactoryAI::InventoryList)
        .def_readwrite("TeamIndex", &UActorFactoryAI::TeamIndex)
        .def("StaticClass", &UActorFactoryAI::StaticClass, py::return_value_policy::reference)
          ;
}