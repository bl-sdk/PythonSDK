#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPylon(py::object m)
{
    py::class_< UActorFactoryPylon,  UActorFactory   >(m, "UActorFactoryPylon")
        .def("StaticClass", &UActorFactoryPylon::StaticClass, py::return_value_policy::reference)
          ;
}