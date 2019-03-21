#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxAIFactory()
{
    py::class_< UGearboxAIFactory,  UAIFactoryBase   >("UGearboxAIFactory")
        .def("StaticClass", &UGearboxAIFactory::StaticClass, py::return_value_policy::reference)
        .def("FreeRuleEngine", &UGearboxAIFactory::FreeRuleEngine)
        .def("GetRuleEngineFromTemplate", &UGearboxAIFactory::GetRuleEngineFromTemplate)
        .staticmethod("StaticClass")
  ;
}