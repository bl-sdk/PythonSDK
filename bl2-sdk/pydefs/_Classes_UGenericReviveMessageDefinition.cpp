#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGenericReviveMessageDefinition(py::module &m)
{
    py::class_< UGenericReviveMessageDefinition,  UGBXDefinition   >(m, "UGenericReviveMessageDefinition")
		.def_static("StaticClass", &UGenericReviveMessageDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Message_Self", &UGenericReviveMessageDefinition::Message_Self)
        .def_readwrite("Message_Other", &UGenericReviveMessageDefinition::Message_Other)
          ;
}