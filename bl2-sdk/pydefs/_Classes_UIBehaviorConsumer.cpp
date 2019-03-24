#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIBehaviorConsumer(py::module &m)
{
    py::class_< UIBehaviorConsumer,  UInterface   >(m, "UIBehaviorConsumer")
		.def_static("StaticClass", &UIBehaviorConsumer::StaticClass, py::return_value_policy::reference)
        .def("GetBehaviorConsumerHandle", &UIBehaviorConsumer::GetBehaviorConsumerHandle)
          ;
}