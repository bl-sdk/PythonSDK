#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryBlackMarket(py::module &m)
{
    py::class_< UPopulationFactoryBlackMarket,  UPopulationFactoryInteractiveObject   >(m, "UPopulationFactoryBlackMarket")
		.def_static("StaticClass", &UPopulationFactoryBlackMarket::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MarketDefinition", &UPopulationFactoryBlackMarket::MarketDefinition)
        .def("eventShouldSavePopulationActor", &UPopulationFactoryBlackMarket::eventShouldSavePopulationActor)
        .def("CreateInteractiveObject", &UPopulationFactoryBlackMarket::CreateInteractiveObject, py::return_value_policy::reference)
        .def("eventCreatePopulationActor", &UPopulationFactoryBlackMarket::eventCreatePopulationActor, py::return_value_policy::reference)
          ;
}