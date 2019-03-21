#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCardInfoRelativeToPanel()
{
    class_< FCardInfoRelativeToPanel >("FCardInfoRelativeToPanel", no_init)
        .def_readwrite("PanelName", &FCardInfoRelativeToPanel::PanelName)
        .def_readwrite("ComparePosition", &FCardInfoRelativeToPanel::ComparePosition)
        .def_readwrite("CompareScale", &FCardInfoRelativeToPanel::CompareScale)
  ;
}