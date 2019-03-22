#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXCrossLevelReferenceContainer(py::module &m)
{
    py::class_< UGBXCrossLevelReferenceContainer,  UObject   >(m, "UGBXCrossLevelReferenceContainer")
        .def_readwrite("CrossLevelObjectRef", &UGBXCrossLevelReferenceContainer::CrossLevelObjectRef)
          ;
}