#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStorePublisher(py::module &m)
{
    py::class_< UUIDataStorePublisher,  UUIDataStoreSubscriber   >(m, "UUIDataStorePublisher")
		.def_static("StaticClass", &UUIDataStorePublisher::StaticClass, py::return_value_policy::reference)
        .def("SaveSubscriberValue", &UUIDataStorePublisher::SaveSubscriberValue)
          ;
}