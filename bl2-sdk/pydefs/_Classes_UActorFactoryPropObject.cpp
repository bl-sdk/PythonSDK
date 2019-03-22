#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPropObject(py::module &m)
{
    py::class_< UActorFactoryPropObject,  UActorFactoryInteractiveObject   >(m, "UActorFactoryPropObject")
          ;
}