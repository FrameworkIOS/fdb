import XCTest
@testable import fdb

final class fdbTests: XCTestCase {
    func testExample() throws {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
        XCTAssertEqual(fdb().text, "Hello, World!")
    }
}
