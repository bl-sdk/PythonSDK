#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFireLinkItem()
{
    class_< FFireLinkItem >("FFireLinkItem", no_init)
        .def_readwrite("SrcType", &FFireLinkItem::SrcType)
        .def_readwrite("SrcAction", &FFireLinkItem::SrcAction)
        .def_readwrite("DestType", &FFireLinkItem::DestType)
        .def_readwrite("DestAction", &FFireLinkItem::DestAction)
  ;
}