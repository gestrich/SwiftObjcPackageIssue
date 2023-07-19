//
//  AnimalPrinter.swift
//  SimpleApp
//
//  Created by Bill Gestrich on 6/20/23.
//

import Foundation
import TestPackage

class AnimalPrinter {

    func print() {

        //Can Access Swift Package symbols directly here
        let zebra  = Zebra()
        Swift.print(zebra.saySomething())

        //Build errors occur when accessing Objective-C header methods
        //that reference Swift Package Symbols
        //In this case, we are accessing the objc-method getZebra which has a
        //package symbol `Zebra` as the return value
        let animalFactory = AnimalFactory()
        //animalFactory.getZebra() //Compile error: "Value of type 'AnimalFactory' has no member 'getZebra'"
    }
}
