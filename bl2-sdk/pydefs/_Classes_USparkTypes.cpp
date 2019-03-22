#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USparkTypes(py::module &m)
{
    py::class_< USparkTypes,  UObject   >(m, "USparkTypes")
        .def("UTF8toString", &USparkTypes::UTF8toString)
        .def("OnEntitlementsUpdated", &USparkTypes::OnEntitlementsUpdated)
        .def("OnSparkEmergencyMessageUpdated", &USparkTypes::OnSparkEmergencyMessageUpdated)
        .def("OnSparkInitialized", &USparkTypes::OnSparkInitialized)
        .def("OnSparkConfigReceived", &USparkTypes::OnSparkConfigReceived)
        .def("OnSparkRequestComplete", &USparkTypes::OnSparkRequestComplete)
          ;
}