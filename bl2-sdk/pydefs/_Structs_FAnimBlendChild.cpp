#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAnimBlendChild()
{
    class_< FAnimBlendChild >("FAnimBlendChild", no_init)
        .def_readwrite("Name", &FAnimBlendChild::Name)
        .def_readwrite("Anim", &FAnimBlendChild::Anim)
        .def_readwrite("Weight", &FAnimBlendChild::Weight)
        .def_readwrite("BlendWeight", &FAnimBlendChild::BlendWeight)
        .def_readwrite("AdditiveWeightScale", &FAnimBlendChild::AdditiveWeightScale)
  ;
}