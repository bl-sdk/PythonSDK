#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkDialogueEvent(py::module &m)
{
    py::class_< UAkDialogueEvent,  UAkObject   >(m, "UAkDialogueEvent")
		.def_static("StaticClass", &UAkDialogueEvent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RequiredBank", &UAkDialogueEvent::RequiredBank)
        .def_readwrite("Arguments", &UAkDialogueEvent::Arguments)
        .def_readwrite("FaceFXAnimSet", &UAkDialogueEvent::FaceFXAnimSet)
          ;
}