#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxAIFactory()
{
    class_< UGearboxAIFactory, bases< UAIFactoryBase >  , boost::noncopyable>("UGearboxAIFactory", no_init)
        .def("StaticClass", &UGearboxAIFactory::StaticClass, return_value_policy< reference_existing_object >())
        .def("FreeRuleEngine", &UGearboxAIFactory::FreeRuleEngine)
        .def("GetRuleEngineFromTemplate", &UGearboxAIFactory::GetRuleEngineFromTemplate)
        .staticmethod("StaticClass")
  ;
}