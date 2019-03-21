#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USparkTypes()
{
    class_< USparkTypes, bases< UObject >  , boost::noncopyable>("USparkTypes", no_init)
        .def("StaticClass", &USparkTypes::StaticClass, return_value_policy< reference_existing_object >())
        .def("UTF8toString", &USparkTypes::UTF8toString)
        .def("OnEntitlementsUpdated", &USparkTypes::OnEntitlementsUpdated)
        .def("OnSparkEmergencyMessageUpdated", &USparkTypes::OnSparkEmergencyMessageUpdated)
        .def("OnSparkInitialized", &USparkTypes::OnSparkInitialized)
        .def("OnSparkConfigReceived", &USparkTypes::OnSparkConfigReceived)
        .def("OnSparkRequestComplete", &USparkTypes::OnSparkRequestComplete)
        .staticmethod("StaticClass")
  ;
}