#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryBlackMarket()
{
    py::class_< UPopulationFactoryBlackMarket,  UPopulationFactoryInteractiveObject   >("UPopulationFactoryBlackMarket")
        .def_readwrite("MarketDefinition", &UPopulationFactoryBlackMarket::MarketDefinition)
        .def("StaticClass", &UPopulationFactoryBlackMarket::StaticClass, py::return_value_policy::reference)
        .def("eventShouldSavePopulationActor", &UPopulationFactoryBlackMarket::eventShouldSavePopulationActor)
        .def("CreateInteractiveObject", &UPopulationFactoryBlackMarket::CreateInteractiveObject, py::return_value_policy::reference)
        .def("eventCreatePopulationActor", &UPopulationFactoryBlackMarket::eventCreatePopulationActor, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}