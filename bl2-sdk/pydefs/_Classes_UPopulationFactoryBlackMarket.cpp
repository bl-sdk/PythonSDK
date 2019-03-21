#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationFactoryBlackMarket()
{
    class_< UPopulationFactoryBlackMarket, bases< UPopulationFactoryInteractiveObject >  , boost::noncopyable>("UPopulationFactoryBlackMarket", no_init)
        .def_readwrite("MarketDefinition", &UPopulationFactoryBlackMarket::MarketDefinition)
        .def("StaticClass", &UPopulationFactoryBlackMarket::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventShouldSavePopulationActor", &UPopulationFactoryBlackMarket::eventShouldSavePopulationActor)
        .def("CreateInteractiveObject", &UPopulationFactoryBlackMarket::CreateInteractiveObject, return_value_policy< reference_existing_object >())
        .def("eventCreatePopulationActor", &UPopulationFactoryBlackMarket::eventCreatePopulationActor, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}