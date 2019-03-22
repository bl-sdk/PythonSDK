#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIBehaviorConsumer(py::module &m)
{
    py::class_< UIBehaviorConsumer,  UInterface   >(m, "UIBehaviorConsumer")
        .def("GetBehaviorConsumerHandle", &UIBehaviorConsumer::GetBehaviorConsumerHandle)
          ;
}