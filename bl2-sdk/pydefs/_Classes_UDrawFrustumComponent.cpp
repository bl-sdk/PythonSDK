#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawFrustumComponent(py::module &m)
{
    py::class_< UDrawFrustumComponent,  UPrimitiveComponent   >(m, "UDrawFrustumComponent")
        .def_readwrite("FrustumColor", &UDrawFrustumComponent::FrustumColor)
        .def_readwrite("FrustumAngle", &UDrawFrustumComponent::FrustumAngle)
        .def_readwrite("FrustumAspectRatio", &UDrawFrustumComponent::FrustumAspectRatio)
        .def_readwrite("FrustumStartDist", &UDrawFrustumComponent::FrustumStartDist)
        .def_readwrite("FrustumEndDist", &UDrawFrustumComponent::FrustumEndDist)
        .def_readwrite("Texture", &UDrawFrustumComponent::Texture)
          ;
}