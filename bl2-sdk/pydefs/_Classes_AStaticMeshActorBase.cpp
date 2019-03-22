#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStaticMeshActorBase(py::module &m)
{
    py::class_< AStaticMeshActorBase,  AActor   >(m, "AStaticMeshActorBase")
          ;
}