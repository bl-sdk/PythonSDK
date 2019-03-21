#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULeviathanService()
{
    class_< ULeviathanService, bases< UObject >  , boost::noncopyable>("ULeviathanService", no_init)
        .def_readwrite("VfTable_ISparkUpdateCallback", &ULeviathanService::VfTable_ISparkUpdateCallback)
        .def_readwrite("EventBufferSize", &ULeviathanService::EventBufferSize)
        .def_readwrite("StatBufferSize", &ULeviathanService::StatBufferSize)
        .def_readwrite("AtomTableBufferSize", &ULeviathanService::AtomTableBufferSize)
        .def("StaticClass", &ULeviathanService::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetLeviathanServiceConfiguration", &ULeviathanService::eventGetLeviathanServiceConfiguration, return_value_policy< reference_existing_object >())
        .def("OnSparkInitialized", &ULeviathanService::OnSparkInitialized)
        .def("LoadServiceConfigurationForPlayer", &ULeviathanService::LoadServiceConfigurationForPlayer)
        .def("GetLeviathanService", &ULeviathanService::GetLeviathanService, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}