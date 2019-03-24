#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalTrainingDefinitionMessage(py::module &m)
{
    py::class_< ULocalTrainingDefinitionMessage,  UWillowLocalMessage   >(m, "ULocalTrainingDefinitionMessage")
		.def_static("StaticClass", &ULocalTrainingDefinitionMessage::StaticClass, py::return_value_policy::reference)
        .def("ClientTrainingDefinitionReceive", &ULocalTrainingDefinitionMessage::ClientTrainingDefinitionReceive)
          ;
}